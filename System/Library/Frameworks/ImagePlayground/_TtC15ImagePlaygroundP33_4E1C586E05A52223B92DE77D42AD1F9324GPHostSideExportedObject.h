//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <swiftCore/_TtCs12_SwiftObject.h>

@class MISSING_TYPE;

@interface _TtC15ImagePlaygroundP33_4E1C586E05A52223B92DE77D42AD1F9324GPHostSideExportedObject : _TtCs12_SwiftObject
{
    MISSING_TYPE *pickerDelegate;	// 16 = 0x10
    MISSING_TYPE *editorDelegate;	// 32 = 0x20
    MISSING_TYPE *progressDelegate;	// 48 = 0x30
}

- (void)editorDidChangeHasSignificantEdits:(_Bool)arg1;	// IMP=0x00000000000db350
- (void)editorDidChangeCanStartUpscaling:(_Bool)arg1;	// IMP=0x00000000000db050
- (void)editorDidCancelWithRequiresShowingGrid:(_Bool)arg1;	// IMP=0x00000000000dafa0
- (void)editorDidGenerateAssets:(id)arg1;	// IMP=0x00000000000dad40
- (void)pickerWillStartCreation;	// IMP=0x00000000000dab00
- (void)pickerWantsToStartCreationWithIsTransitionSupported:(_Bool)arg1 replyHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000da890
- (void)pickerDidCancel;	// IMP=0x00000000000da660
- (void)pickerDidSelectAssets:(id)arg1;	// IMP=0x00000000000da620

@end

