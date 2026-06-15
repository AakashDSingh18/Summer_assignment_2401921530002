package OOPs.live;
import OOPs.music.Playable;
import OOPs.music.string.veena;
import OOPs.music.wind.saxophone;
public class Test {
    public static void main(String[] args) {
        Playable m1= new veena();
        Playable m2= new saxophone();
        m1.play();
        m2.play();
    }
}
