//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PencilKit/NSObject-Protocol.h>

@class PKTextInputDebugSharpenerLog, PKTextInputPaletteController, UIView;

@protocol PKTextInputPaletteControllerDelegate <NSObject>
- (void)textInputPaletteControllerFloatingKeyboardWillHide:(PKTextInputPaletteController *)arg1;
- (void)textInputPaletteControllerFloatingKeyboardWillShow:(PKTextInputPaletteController *)arg1;
- (PKTextInputDebugSharpenerLog *)paletteControllerDebugSharpenerLog:(PKTextInputPaletteController *)arg1;
- (UIView *)paletteControllerContainerView:(PKTextInputPaletteController *)arg1;
@end
