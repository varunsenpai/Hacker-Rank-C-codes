

int main()
{
    int total_number_of_shelves;
    scanf("%d", &total_number_of_shelves);

    total_number_of_pages = (int **)calloc(total_number_of_shelves, sizeof(int *));

    total_number_of_books = (int *)calloc(total_number_of_shelves, sizeof(int));

    int z;
    for(z = 0; z < total_number_of_shelves; z++)
    {
        total_number_of_pages[z] = (int *)calloc(1101, sizeof(int));
    }
 
    
    int total_number_of_queries;
    scanf("%d", &total_number_of_queries);
    
    while (total_number_of_queries--) {
        int type_of_query;
        scanf("%d", &type_of_query);
        
        if (type_of_query == 1) {
            /*
             * Process the query of first type here.
             */
            int x, y;
            scanf("%d %d", &x, &y);

            *(total_number_of_books+x)+=1;
            *(total_number_of_pages+x)=realloc(*(total_number_of_pages+x), *(total_number_of_books+x)*sizeof(int));
            *(*(total_number_of_pages+x)+*(total_number_of_books+x)-1)=y;  

            //total_number_of_shelves = (int *)malloc()

