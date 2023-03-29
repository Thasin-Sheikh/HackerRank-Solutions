typedef struct box
{
    int length, width, height;

} box;

int get_volume(box b)
{
    return b.width * b.length * b.height;
}

int is_lower_than_max_height(box b)
{
    return b.height < 41;
}


