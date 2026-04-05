public class MotiMaradVillage {
    private final String name = "Moti Marad";
    private final String taluka = "Dhoraji";
    private final String state = "Gujarat";

    public void displaySummary() {
        System.out.println("Identity Profile for " + name);
        System.out.println("----------------------------");
        System.out.println("Taluka Headquarters: " + taluka);
        System.out.println("State:               " + state);
        System.out.println("Significance:        One of the largest villages in Rajkot district.");
    }

    public static void main(String[] args) {
        new MotiMaradVillage().displaySummary();
    }
}
