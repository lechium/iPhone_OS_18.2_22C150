//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PSDisplay, UIWindowScene;

@interface _PUIDSceneBag : NSObject
{
    UIWindowScene *_systemPointerScene;	// 8 = 0x8
    UIWindowScene *_pointerRenderingScene;	// 16 = 0x10
    PSDisplay *_display;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000001d9a5
- (void)appendDescriptionToFormatter:(id)arg1;	// IMP=0x001000000001d832
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

