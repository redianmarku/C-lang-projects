//
//  ContentView.swift
//  Shefi Prrenjas App Store Lac Vegas
//
//  Created by Redian Marku on 26.1.22.
//

import SwiftUI

struct ContentView: View {
    var body: some View {
        Text("Shefi Prrenjas!")
            .font(.largeTitle)
            .fontWeight(.heavy)
            .foregroundColor(Color.green)
            .lineLimit(1)
            .padding(20)
            .foregroundColor(Color(UIColor.systemBackground))
            .accessibilityLabel(/*@START_MENU_TOKEN@*/"Label"/*@END_MENU_TOKEN@*/)
        
//        Button()
//            .frame(width: 5.0, height: 3.0)
//            .accessibilityAddTraits([.isButton])
//            .accessibilityLabel("buton")
//            .accessibilityValue("2")

        
    }
}

struct ContentView_Previews: PreviewProvider {
    static var previews: some View {
            ContentView()
                .preferredColorScheme(.light)
                .environment(\.sizeCategory, .extraLarge)
                .previewInterfaceOrientation(.portrait)
        
    }
}
