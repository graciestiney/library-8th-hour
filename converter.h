float cm_to_in(void)
{
    //TUCKER BARTHOLOMEW
    float cm = get_float("Number of centimeters:");
    float in = cm / 2.54;
    printf("\nThe number of inches is %.2f\n", in);
    return in;
}
float in_to_m(void)
{
    //ADAM NUSSBAUM
    float in = get_float("Number of inches:");
    float m = in * .0254;
    printf("\nThe number of meters is %.2f\n", m);
    return m;
}
