//
//  EditPreferences.h
//  SubEthaEdit
//
//  Created by Martin Ott on Mon Mar 29 2004.
//  Copyright (c) 2004 TheCodingMonkeys. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TCMPreferenceModule.h"

@class DocumentModePopUpButton;

@interface EditPreferences : TCMPreferenceModule {
    IBOutlet NSTextField   *O_tabWidthTextField;
    IBOutlet NSButton      *O_usesTabsButton;
    IBOutlet NSButton      *O_indentNewLinesButton;
    IBOutlet NSButton      *O_wrapLinesButton;
    IBOutlet NSButton      *O_showMatchingBracketsButton;
    IBOutlet NSTextField   *O_matchingBracketTypesTextField;
    IBOutlet NSButton      *O_showLineNumbersButton;
    IBOutlet NSButton      *O_highlightSyntaxButton;
    IBOutlet NSTextField   *O_fontTextField;
    IBOutlet NSColorWell   *O_documentForegroundColorWell;
    IBOutlet NSColorWell   *O_documentBackgroundColorWell;
    
    IBOutlet DocumentModePopUpButton *O_modePopUpButton;
    IBOutlet NSObjectController *O_modeController;
}

- (IBAction)changeMode:(id)aSender;
- (IBAction)changeFontViaPanel:(id)sender;


@end
