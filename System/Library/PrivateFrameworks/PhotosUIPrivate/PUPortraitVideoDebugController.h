//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class NSArray, NSString, PICompositionController;

__attribute__((visibility("hidden")))
@interface PUPortraitVideoDebugController : UIViewController
{
    PICompositionController *_compositionController;	// 8 = 0x8
    NSArray *_debugModes;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000004555bc
@property(retain, nonatomic) NSArray *debugModes; // @synthesize debugModes=_debugModes;
@property(retain, nonatomic) PICompositionController *compositionController; // @synthesize compositionController=_compositionController;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0000000000455451
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000455335
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00000000004552f1
- (void)loadView;	// IMP=0x0000000000454bc3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
