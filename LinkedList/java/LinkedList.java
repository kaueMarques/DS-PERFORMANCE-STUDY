
public class LinkedList {

    public static MyNode node = new MyNode();

    public static void main(String[] args) {

        for (int i = 0; i < 10; i++) {
            addNodeAtEnd(node, i);
        }

        for (int i = 0; i < 3; i++) {
            removeStart(node);
        }
        
        System.out.println(getFisrt(node));
    }

    public static MyNode getFisrt(MyNode node) {
        return node.next;
    }

    public static void addNodeAtEnd(MyNode node, int data) {
        if (node.next != null) {
            addNodeAtEnd(node.next, data);

        } else {
            node.next = new MyNode(data);
        }

    }

    public static void removeStart(MyNode node) {
        if (node.next != null && node.next.next != null) {
            node.next = node.next.next;
        }

    }

}

class MyNode {

    public Object data;
    public MyNode next;

    public MyNode(Object data) {
        this.data = data;
        this.next = null;
    }

    public MyNode() {
        this.data = null;
        this.next = null;
    }

    @Override
    public String toString() {
        return "MyNode [data=" + data + ", next=" + next + "]";
    }

}
