//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIActivity.h>

@class LSApplicationProxy, NSString;

__attribute__((visibility("hidden")))
@interface _SFOpenWithAppUIActivity : UIActivity
{
    LSApplicationProxy *_appProxy;	// 8 = 0x8
    NSString *_filePath;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000015a246
- (void)openResourceOperation:(id)arg1 didFinishCopyingResource:(id)arg2;	// IMP=0x000000000015a1e0
- (void)performActivity;	// IMP=0x000000000015a0fb
- (_Bool)canPerformWithActivityItems:(id)arg1;	// IMP=0x000000000015a0f3
- (id)_activityImage;	// IMP=0x000000000015a0c7
- (id)activityTitle;	// IMP=0x000000000015a0aa
- (id)activityType;	// IMP=0x000000000015a09d
- (id)initWithApplicationIdentifier:(id)arg1 andFilePath:(id)arg2;	// IMP=0x0000000000159fe0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

