//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface MLModelAssetResourceFactoryOnDiskImpl : NSObject
{
    NSURL *_modelURL;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000128716
@property(readonly, nonatomic) NSURL *modelURL; // @synthesize modelURL=_modelURL;
- (id)modelStructureWithError:(id *)arg1;	// IMP=0x0000000000128493
- (id)modelWithConfiguration:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001283a4
- (id)modelAssetDescriptionWithError:(id *)arg1;	// IMP=0x0000000000128328
@property(readonly, copy, nonatomic) NSURL *compiledModelURL;
- (id)initWithModelURL:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000128297

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

