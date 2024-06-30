// Courier Management System
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

typedef struct
{
    char senders_fname[100];
    char senders_lname[100];
    char recievers_fname[100];
    char recievers_lname[100];
    char livelocation[100];
    char status[100];
    int tracking_id;
} package;

void add_package(package *packages, int *num_packages, FILE *file);
void update_location(package *packages, int num_packages, FILE *file);
void update_status(package *packages, int num_packages, FILE *file);
void display_packages(package *packages, int num_packages, FILE *file);
void sort(package *packages,int num_packages, FILE *file);
void write_packages_to_file(package *packages, int num_packages, FILE *file);
void read_packages_from_file(package *packages, int *num_packages, FILE *file);
void remove_duplicates(FILE *file);

int main()
{
    package packages[100];
    int num_packages = 0, choice;

    FILE *file = fopen("packages.txt", "a+");
    remove_duplicates(file);

    if (file == NULL)
    {
        printf("Error opening the file.\n");
        return 1;
    }

    read_packages_from_file(packages, &num_packages, file);

    while (1)
    {
        printf("\n\t\t\tCourier Management System\nEnter the operation number of the operation tat you want to perform:\n1. Add new package\n2. Update live location\n3. Update status\n4. Display packages\n5. sortpackages\n6. Exit \n");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1:
            add_package(packages, &num_packages, file);
            break;
        case 2:
            update_location(packages, num_packages, file);
            break;
        case 3:
            update_status(packages, num_packages, file);
            break;
        case 4:
            display_packages(packages, num_packages, file);
            break;
        case 5:
            sort(packages, num_packages, file);
            break;
        case 6:
            fclose(file);
            exit(0);
        default:
            printf("Invalid Choice\n");
            break;
        }
    }

    return 0;
}

void add_package(package *packages, int *num_packages, FILE *file)
{
    printf("Enter sender's first name: ");
    scanf("%s",packages[*num_packages].senders_fname);

    printf("Enter sender's last name: ");
    scanf("%s",packages[*num_packages].senders_lname);

    printf("Enter reciever's first name: ");
    scanf("%s",packages[*num_packages].recievers_fname);

    printf("Enter reciever's last name: ");
    scanf("%s",packages[*num_packages].recievers_lname);

    printf("Enter location: ");
    scanf("%s",packages[*num_packages].livelocation);

    strcpy(packages[*num_packages].status,"In_Transit");

    time_t current_time = time(NULL);
    int new_tracking_id = (int)current_time + *num_packages;

    packages[*num_packages].tracking_id = new_tracking_id;

    (*num_packages)++;
    printf("\nPackage added successfully.\n");

    write_packages_to_file(packages, *num_packages, file);

}

void update_location(package *packages, int num_packages, FILE *file)
{
    int id;
    printf("enter tracking ID: ");
    scanf("%d", &id);

    int found = 0;
    for (int i=0; i<num_packages; i++)
    {
        if (id == packages[i].tracking_id)
        {
            printf("enter new location: ");
            scanf("%s",packages[i].livelocation);
            printf("\nStatus updated successfully\n");
            found++;
            break;
        }
    }
    (found) ? write_packages_to_file(packages, num_packages, file) : printf ("Package not found");
}


void update_status(package *packages, int num_packages, FILE *file)
{
    int id;
    printf("enter tracking ID: ");
    scanf("%d",&id);

    int found = 0;
    for (int i=0; i<num_packages; i++)
    {
        if (id == packages[i].tracking_id)
        {
            printf("Enter new status: ");
            scanf("%s",packages[i].status);
            printf("\nStatus updated successfully\n");
            found++;
            break;
        }
    }
    (found) ? printf ("Package not found") : write_packages_to_file(packages, num_packages, file) ;
}

void display_packages(package *packages, int num_packages, FILE *file)
{
    if (num_packages == 0)
    {
        printf("\nPackage not found.\n");
    }
    else
    {
        printf("Sender Name\t\tReciever Name\t\tLive location\t\tStatus\t\t\tTracking ID\n");
        for (int i=0; i<num_packages; i++)
        {
            if (strlen(packages[i].livelocation) < 8) printf("%s %s\t\t%s %s\t\t%s\t\t\t%s\t\t%d\n",packages[i].senders_fname,packages[i].senders_lname,packages[i].recievers_fname,packages[i].recievers_lname,packages[i].livelocation,packages[i].status,packages[i].tracking_id);
            else printf("%s %s\t\t%s %s\t\t%s\t\t%s\t\t%d\n",packages[i].senders_fname,packages[i].senders_lname,packages[i].recievers_fname,packages[i].recievers_lname,packages[i].livelocation,packages[i].status,packages[i].tracking_id);
        }
    }
}

void sort(package *packages,int num_packages, FILE *file)
{
    int key;
    package temp;
    printf("\n Sorted \n");
    for (int i=0; i<num_packages-1; i++)
    {
        for(int j=0; j<num_packages-1-i; j++)
        {
            if (packages[j].tracking_id > packages[j+1].tracking_id)
            {
                temp = packages[j];
                packages[j] = packages[j+1];
                packages[j+1] = temp;
            } 
        }
    }
    write_packages_to_file(packages, num_packages, file);
}

void write_packages_to_file(package *packages, int num_packages, FILE *file)
{
    freopen(NULL, "w", file);
    for (int i = 0; i < num_packages; i++)
    {
        fprintf(file, "%s %s %s %s %s %s %d\n", packages[i].senders_fname, packages[i].senders_lname, packages[i].recievers_fname, packages[i].recievers_lname, packages[i].livelocation, packages[i].status, packages[i].tracking_id);
    }
}

void read_packages_from_file(package *packages, int *num_packages, FILE *file)
{
    char buffer[100];
    while (fgets(buffer, sizeof(buffer), file) != NULL)
    {
        sscanf(buffer, "%s %s %s %s %s %s %d", packages[*num_packages].senders_fname, packages[*num_packages].senders_lname, packages[*num_packages].recievers_fname, packages[*num_packages].recievers_lname, packages[*num_packages].livelocation, packages[*num_packages].status, &packages[*num_packages].tracking_id);
        (*num_packages)++;
    }
}

void remove_duplicates(FILE *file)
{
    FILE *tempFile = fopen("temp.txt", "w");
    if (tempFile == NULL) {
        printf("Error opening temporary file.\n");
        return;
    }

    char line[100];
    char previousTrackingID[100] = "";

    while (fgets(line, sizeof(line), file) != NULL) {
        line[strcspn(line, "\n")] = '\0';

        char trackingID[100];
        sscanf(line, "%*s %*s %*s %*s %*s %*s %s", trackingID);

        if (strcmp(trackingID, previousTrackingID) != 0) {
            fputs(line, tempFile);
            fputs("\n", tempFile);
            strcpy(previousTrackingID, trackingID);
        }
    }

    fclose(file);
    fclose(tempFile);
    remove("packages.txt");
    rename("temp.txt", "packages.txt");
    file = fopen("packages.txt", "a+");
    if (file == NULL) {
        printf("Error opening the file.\n");
        return;
    }

    printf("Duplicates removed successfully.\n");
}