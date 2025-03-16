class Storage {
    protected String capacity, type;
    public Storage(String capacity, String type) {
        this.capacity = capacity;
        this.type = type;
    }

    public String getCapacity() { return capacity; }
    public String getType() { return type; }

    // setter
    public void setCapacity(String capacity) { this.capacity = capacity; }
    public void setType(String type) { this.type = type; }
    

}
