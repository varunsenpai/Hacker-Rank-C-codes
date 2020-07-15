

//Complete the following function.

int marks_summation(int* marks, int number_of_students, char gender) {
  int sum_boys = 0;
  int sum_girls = 0;
  int i = 0;
  int increment;

  if(gender == 'b')
  {
      for(i = 0; (i < number_of_students); i+=2)
      {
          sum_boys+=marks[i];
      }
      return sum_boys;
  }

  else
  {
      for(i = 1; (i < number_of_students); i+=2)
      {
          sum_girls+=marks[i];
      }
    return sum_girls;
  }

  
}

