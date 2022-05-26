//
//  Shefi_Prrenjas_App_Store_Lac_VegasUITestsLaunchTests.swift
//  Shefi Prrenjas App Store Lac VegasUITests
//
//  Created by Redian Marku on 26.1.22.
//

import XCTest

class Shefi_Prrenjas_App_Store_Lac_VegasUITestsLaunchTests: XCTestCase {

    override class var runsForEachTargetApplicationUIConfiguration: Bool {
        true
    }

    override func setUpWithError() throws {
        continueAfterFailure = false
    }

    func testLaunch() throws {
        let app = XCUIApplication()
        app.launch()

        // Insert steps here to perform after app launch but before taking a screenshot,
        // such as logging into a test account or navigating somewhere in the app

        let attachment = XCTAttachment(screenshot: app.screenshot())
        attachment.name = "Launch Screen"
        attachment.lifetime = .keepAlways
        add(attachment)
    }
}
