public class OperatingSystem extends Software {
    private String architecture;
    private String kernelType;

    public OperatingSystem(String name, String version, String architecture, String kernelType) {
        super(name, version);
        this.architecture = architecture;
        this.kernelType = kernelType;
    }

    // Getters
    public String getArchitecture() {
        return architecture;
    }

    public String getKernelType() {
        return kernelType;
    }

    // Setters
    public void setArchitecture(String architecture) {
        this.architecture = architecture;
    }

    public void setKernelType(String kernelType) {
        this.kernelType = kernelType;
    }
}
