/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/GUIForms/JFrame.java to edit this template
 */
package jogodavelha;

import javax.swing.JButton;
import javax.swing.JOptionPane;

/**
 *
 * @author Willyan
 */
public class JogoDaVelha extends javax.swing.JFrame {
    private char escolha = 'X';
    private boolean vez = true;

    /**
     * Creates new form JogoDaVelha
     */
    public JogoDaVelha() {
        initComponents();
        iniciar();
    }
    
    private void iniciar() {
        j1.setText(" ");
        j2.setText(" ");
        j3.setText(" ");
        j4.setText(" ");
        j5.setText(" ");
        j6.setText(" ");
        j7.setText(" ");
        j8.setText(" ");
        j9.setText(" ");
        
        escolha = 'X';
        vez = true;
        jLabel1.setText(escolha+"");
        this.pack();
    }
    
    private char escolha() {
        if (vez==true) {
            escolha = 'X';
            jLabel1.setText("O");
        } else {
            escolha = 'O';
            jLabel1.setText("X");
        } vez = !vez;
        return escolha;
    }
    
    private void verificarVencedor() {
        char[] v1 = j1.getText().toCharArray();
        char[] v2 = j2.getText().toCharArray();
        char[] v3 = j3.getText().toCharArray();
        char[] v4 = j4.getText().toCharArray();
        char[] v5 = j5.getText().toCharArray();
        char[] v6 = j6.getText().toCharArray();
        char[] v7 = j7.getText().toCharArray();
        char[] v8 = j8.getText().toCharArray();
        char[] v9 = j9.getText().toCharArray();
            
        // VERIFICAR 'X'
        if (v1[0] == 'X')
            if (v2[0] == 'X')
                if (v3[0] == 'X') {
                    JOptionPane.showMessageDialog(jPanel1, "X Venceu!");
                    iniciar();
                    return;
                }
        if (v1[0] == 'X')
            if (v5[0] == 'X')
                if (v9[0] == 'X') {
                    JOptionPane.showMessageDialog(jPanel1, "X Venceu!");
                    iniciar();
                    return;
                }
        if (v1[0] == 'X')
            if (v4[0] == 'X')
                if (v7[0] == 'X') {
                    JOptionPane.showMessageDialog(jPanel1, "X Venceu!");
                    iniciar();
                    return;
                }
        if (v2[0] == 'X')
            if (v5[0] == 'X')
                if (v8[0] == 'X') {
                    JOptionPane.showMessageDialog(jPanel1, "X Venceu!");
                    iniciar();
                    return;
                }
        if (v3[0] == 'X')
            if (v6[0] == 'X')
                if (v9[0] == 'X') {
                    JOptionPane.showMessageDialog(jPanel1, "X Venceu!");
                    iniciar();
                    return;
                }
        if (v3[0] == 'X')
            if (v5[0] == 'X')
                if (v7[0] == 'X') {
                    JOptionPane.showMessageDialog(jPanel1, "X Venceu!");
                    iniciar();
                    return;
                }
        if (v4[0] == 'X')
            if (v5[0] == 'X')
                if (v6[0] == 'X') {
                    JOptionPane.showMessageDialog(jPanel1, "X Venceu!");
                    iniciar();
                    return;
                }
        if (v7[0] == 'X')
            if (v8[0] == 'X')
                if (v9[0] == 'X') {
                    JOptionPane.showMessageDialog(jPanel1, "X Venceu!");
                    iniciar();
                    return;
                }
        
        // VERIFICAR 'O'
        if (v1[0] == 'O')
            if (v2[0] == 'O')
                if (v3[0] == 'O') {
                    JOptionPane.showMessageDialog(jPanel1, "O Venceu!");
                    iniciar();
                    return;
                }
        if (v1[0] == 'O')
            if (v5[0] == 'O')
                if (v9[0] == 'O') {
                    JOptionPane.showMessageDialog(jPanel1, "O Venceu!");
                    iniciar();
                    return;
                }
        if (v1[0] == 'O')
            if (v4[0] == 'O')
                if (v7[0] == 'O') {
                    JOptionPane.showMessageDialog(jPanel1, "O Venceu!");
                    iniciar();
                    return;
                }
        if (v2[0] == 'O')
            if (v5[0] == 'O')
                if (v8[0] == 'O') {
                    JOptionPane.showMessageDialog(jPanel1, "O Venceu!");
                    iniciar();
                    return;
                }
        if (v3[0] == 'O')
            if (v6[0] == 'O')
                if (v9[0] == 'O') {
                    JOptionPane.showMessageDialog(jPanel1, "O Venceu!");
                    iniciar();
                    return;
                }
        if (v3[0] == 'O')
            if (v5[0] == 'O')
                if (v7[0] == 'O') {
                    JOptionPane.showMessageDialog(jPanel1, "O Venceu!");
                    iniciar();
                    return;
                }
        if (v4[0] == 'O')
            if (v5[0] == 'O')
                if (v6[0] == 'O') {
                    JOptionPane.showMessageDialog(jPanel1, "O Venceu!");
                    iniciar();
                    return;
                }
        if (v7[0] == 'O')
            if (v8[0] == 'O')
                if (v9[0] == 'O') {
                    JOptionPane.showMessageDialog(jPanel1, "O Venceu!");
                    iniciar();
                    return;
                }
        
        // VERIFICAR EMPATE
        if (v1[0] == 'X' || v1[0] == 'O')
            if (v2[0] == 'X' || v2[0] == 'O')
                if (v3[0] == 'X' || v3[0] == 'O')
                    if (v4[0] == 'X' || v4[0] == 'O')
                        if (v5[0] == 'X' || v5[0] == 'O')
                            if (v6[0] == 'X' || v6[0] == 'O')
                                if (v7[0] == 'X' || v7[0] == 'O')
                                    if (v8[0] == 'X' || v8[0] == 'O')
                                        if (v9[0] == 'X' || v9[0] == 'O') {
                                            JOptionPane.showMessageDialog(jPanel1, "Empate!");
                                            iniciar();
                                        }
    }
    /**
     * This method is called from within the constructor to initialize the form.
     * WARNING: Do NOT modify this code. The content of this method is always
     * regenerated by the Form Editor.
     */
    @SuppressWarnings("unchecked")
    // <editor-fold defaultstate="collapsed" desc="Generated Code">//GEN-BEGIN:initComponents
    private void initComponents() {

        jPanel1 = new javax.swing.JPanel();
        j1 = new javax.swing.JButton();
        j2 = new javax.swing.JButton();
        j3 = new javax.swing.JButton();
        j4 = new javax.swing.JButton();
        j5 = new javax.swing.JButton();
        j6 = new javax.swing.JButton();
        j7 = new javax.swing.JButton();
        j8 = new javax.swing.JButton();
        j9 = new javax.swing.JButton();
        jPanel2 = new javax.swing.JPanel();
        jLabel1 = new javax.swing.JLabel();
        reiniciar = new javax.swing.JButton();

        setDefaultCloseOperation(javax.swing.WindowConstants.EXIT_ON_CLOSE);

        jPanel1.setBorder(javax.swing.BorderFactory.createLineBorder(new java.awt.Color(0, 0, 0)));
        jPanel1.setLayout(new java.awt.GridLayout(3, 3, 5, 5));

        j1.setText(" ");
        j1.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                j1ActionPerformed(evt);
            }
        });
        jPanel1.add(j1);

        j2.setText(" ");
        j2.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                j2ActionPerformed(evt);
            }
        });
        jPanel1.add(j2);

        j3.setText(" ");
        j3.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                j3ActionPerformed(evt);
            }
        });
        jPanel1.add(j3);

        j4.setText(" ");
        j4.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                j4ActionPerformed(evt);
            }
        });
        jPanel1.add(j4);

        j5.setText(" ");
        j5.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                j5ActionPerformed(evt);
            }
        });
        jPanel1.add(j5);

        j6.setText(" ");
        j6.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                j6ActionPerformed(evt);
            }
        });
        jPanel1.add(j6);

        j7.setText(" ");
        j7.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                j7ActionPerformed(evt);
            }
        });
        jPanel1.add(j7);

        j8.setText(" ");
        j8.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                j8ActionPerformed(evt);
            }
        });
        jPanel1.add(j8);

        j9.setText(" ");
        j9.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                j9ActionPerformed(evt);
            }
        });
        jPanel1.add(j9);

        jPanel2.setBorder(javax.swing.BorderFactory.createTitledBorder("Vez"));

        jLabel1.setFont(new java.awt.Font("Segoe UI", 0, 36)); // NOI18N
        jLabel1.setText(" ");

        javax.swing.GroupLayout jPanel2Layout = new javax.swing.GroupLayout(jPanel2);
        jPanel2.setLayout(jPanel2Layout);
        jPanel2Layout.setHorizontalGroup(
            jPanel2Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(jPanel2Layout.createSequentialGroup()
                .addContainerGap()
                .addComponent(jLabel1, javax.swing.GroupLayout.PREFERRED_SIZE, 49, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addContainerGap(javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))
        );
        jPanel2Layout.setVerticalGroup(
            jPanel2Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(jPanel2Layout.createSequentialGroup()
                .addContainerGap()
                .addComponent(jLabel1)
                .addContainerGap(javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))
        );

        reiniciar.setFont(new java.awt.Font("Segoe UI", 0, 10)); // NOI18N
        reiniciar.setText("Reiniciar");
        reiniciar.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                reiniciarActionPerformed(evt);
            }
        });

        javax.swing.GroupLayout layout = new javax.swing.GroupLayout(getContentPane());
        getContentPane().setLayout(layout);
        layout.setHorizontalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addGap(92, 92, 92)
                .addComponent(jPanel1, javax.swing.GroupLayout.PREFERRED_SIZE, 154, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addGap(18, 18, 18)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING, false)
                    .addComponent(jPanel2, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                    .addComponent(reiniciar, javax.swing.GroupLayout.PREFERRED_SIZE, 0, Short.MAX_VALUE))
                .addContainerGap(87, Short.MAX_VALUE))
        );
        layout.setVerticalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addGap(61, 61, 61)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addComponent(jPanel1, javax.swing.GroupLayout.PREFERRED_SIZE, 141, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addGroup(layout.createSequentialGroup()
                        .addComponent(jPanel2, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                        .addComponent(reiniciar)))
                .addContainerGap(98, Short.MAX_VALUE))
        );

        pack();
    }// </editor-fold>//GEN-END:initComponents

    private void j1ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_j1ActionPerformed
        char[] jogado = j1.getText().toCharArray();
        if (jogado[0] != ('X') && jogado[0] != ('O'))
            j1.setText(escolha()+"");
        verificarVencedor();
    }//GEN-LAST:event_j1ActionPerformed

    private void j2ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_j2ActionPerformed
        char[] jogado = j2.getText().toCharArray();
        if (jogado[0] != ('X') && jogado[0] != ('O'))
            j2.setText(escolha()+"");
        verificarVencedor();
    }//GEN-LAST:event_j2ActionPerformed

    private void j3ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_j3ActionPerformed
        char[] jogado = j3.getText().toCharArray();
        if (jogado[0] != ('X') && jogado[0] != ('O'))
            j3.setText(escolha()+"");
        verificarVencedor();
    }//GEN-LAST:event_j3ActionPerformed

    private void j4ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_j4ActionPerformed
        char[] jogado = j4.getText().toCharArray();
        if (jogado[0] != ('X') && jogado[0] != ('O'))
            j4.setText(escolha()+"");
        verificarVencedor();
    }//GEN-LAST:event_j4ActionPerformed

    private void j5ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_j5ActionPerformed
        char[] jogado = j5.getText().toCharArray();
        if (jogado[0] != ('X') && jogado[0] != ('O'))
            j5.setText(escolha()+"");
        verificarVencedor();
    }//GEN-LAST:event_j5ActionPerformed

    private void j6ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_j6ActionPerformed
        char[] jogado = j6.getText().toCharArray();
        if (jogado[0] != ('X') && jogado[0] != ('O'))
            j6.setText(escolha()+"");
        verificarVencedor();
    }//GEN-LAST:event_j6ActionPerformed

    private void j7ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_j7ActionPerformed
        char[] jogado = j7.getText().toCharArray();
        if (jogado[0] != ('X') && jogado[0] != ('O'))
            j7.setText(escolha()+"");
        verificarVencedor();
    }//GEN-LAST:event_j7ActionPerformed

    private void j8ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_j8ActionPerformed
        char[] jogado = j8.getText().toCharArray();
        if (jogado[0] != ('X') && jogado[0] != ('O'))
            j8.setText(escolha()+"");
        verificarVencedor();
    }//GEN-LAST:event_j8ActionPerformed

    private void j9ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_j9ActionPerformed
        char[] jogado = j9.getText().toCharArray();
        if (jogado[0] != ('X') && jogado[0] != ('O'))
            j9.setText(escolha()+"");
        verificarVencedor();
    }//GEN-LAST:event_j9ActionPerformed

    private void reiniciarActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_reiniciarActionPerformed
        iniciar();
    }//GEN-LAST:event_reiniciarActionPerformed

    /**
     * @param args the command line arguments
     */
    public static void main(String args[]) {
        /* Set the Nimbus look and feel */
        //<editor-fold defaultstate="collapsed" desc=" Look and feel setting code (optional) ">
        /* If Nimbus (introduced in Java SE 6) is not available, stay with the default look and feel.
         * For details see http://download.oracle.com/javase/tutorial/uiswing/lookandfeel/plaf.html 
         */
        try {
            for (javax.swing.UIManager.LookAndFeelInfo info : javax.swing.UIManager.getInstalledLookAndFeels()) {
                if ("Nimbus".equals(info.getName())) {
                    javax.swing.UIManager.setLookAndFeel(info.getClassName());
                    break;
                }
            }
        } catch (ClassNotFoundException ex) {
            java.util.logging.Logger.getLogger(JogoDaVelha.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (InstantiationException ex) {
            java.util.logging.Logger.getLogger(JogoDaVelha.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (IllegalAccessException ex) {
            java.util.logging.Logger.getLogger(JogoDaVelha.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (javax.swing.UnsupportedLookAndFeelException ex) {
            java.util.logging.Logger.getLogger(JogoDaVelha.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        }
        //</editor-fold>

        /* Create and display the form */
        java.awt.EventQueue.invokeLater(new Runnable() {
            public void run() {
                new JogoDaVelha().setVisible(true);
            }
        });
    }

    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.JButton j1;
    private javax.swing.JButton j2;
    private javax.swing.JButton j3;
    private javax.swing.JButton j4;
    private javax.swing.JButton j5;
    private javax.swing.JButton j6;
    private javax.swing.JButton j7;
    private javax.swing.JButton j8;
    private javax.swing.JButton j9;
    private javax.swing.JLabel jLabel1;
    private javax.swing.JPanel jPanel1;
    private javax.swing.JPanel jPanel2;
    private javax.swing.JButton reiniciar;
    // End of variables declaration//GEN-END:variables

    
}
