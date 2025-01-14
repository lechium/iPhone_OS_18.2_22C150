//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PLAssetsdClient;

__attribute__((visibility("hidden")))
@interface PHLimitedLibraryPickerDelegate : NSObject
{
    CDUnknownBlockType _dismissalBlock;	// 8 = 0x8
    CDUnknownBlockType _finishedPickingBlock;	// 16 = 0x10
    PLAssetsdClient *_assetsdClient;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000001e372
@property(retain, nonatomic) PLAssetsdClient *assetsdClient; // @synthesize assetsdClient=_assetsdClient;
@property(copy, nonatomic) CDUnknownBlockType finishedPickingBlock; // @synthesize finishedPickingBlock=_finishedPickingBlock;
@property(copy, nonatomic) CDUnknownBlockType dismissalBlock; // @synthesize dismissalBlock=_dismissalBlock;
- (void)picker:(id)arg1 didFinishPicking:(id)arg2;	// IMP=0x000000000001e174
- (void)presentationControllerDidDismiss:(id)arg1;	// IMP=0x000000000001e013

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

