#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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

void add_package(package *packages, int *num_packages);
void update_location(package *packages, int num_packages);
void update_status(package *packages, int num_packages);
void display_packages(package *packages, int num_packages);
void sort(package *packages,int num_packages);

int main()
{
    package packages[100];
    int num_packages = 0, choice;

    while (1)
    {
        printf("\n\t\t\tCourier Management System\nEnter the operation number of the operation tat you want to perform:\n1. Add new package\n2. Update live location\n3. Update status\n4. Display packages\n5. sortpackages\n6. Exit \n");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1:
            add_package(packages, &num_packages);
            break;
        case 2:
            update_location(packages, num_packages);
            break;
        case 3:
            update_status(packages, num_packages);
            break;
        case 4:
            display_packages(packages, num_packages);
            break;
        case 5:
            sort(packages, num_packages);
            break;
        case 6:
            exit(0);
        default:
        printf("Invalid Choice\n");
            break;
        }
    }

    return 0;
}

void add_package(package *packages, int *num_packages)
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

    strcpy(packages[*num_packages].status,"In Transit");

    packages[*num_packages].tracking_id = rand();

    (*num_packages)++;
    printf("\nPackage added successfully.\n");

}

void update_location(package *packages, int num_packages)
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
    (found) ? printf("") : printf ("Package not found");
}

void update_status(package *packages, int num_packages)
{
    int id;
    printf("enter tracking ID: ");
    scanf("%d",&id);

    int found = 0;
    for (int i=0; i<num_packages; i++)
    {
        if (id == packages[i].tracking_id)
        {
            printf("enter new status: ");
            scanf("%s",packages[i].status);
            printf("\nStatus updated successfully\n");
            found++;
            break;
        }
    }
    (found) ? printf("") : printf ("Package not found");
}

void display_packages(package *packages, int num_packages)
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

void sort(package *packages,int num_packages)
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
}