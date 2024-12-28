//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString, SCMLHandler, VCPImageBackboneAnalyzer;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface MADSpotlightImageAssetBatchBase : NSObject
{
    VCPImageBackboneAnalyzer *_imageBackboneAnalyzer;	// 8 = 0x8
    NSMutableArray *_assetEntries;	// 16 = 0x10
    NSObject<OS_dispatch_group> *_computeGroup;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_computeQueue;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_requestQueue;	// 40 = 0x28
    SCMLHandler *_commSafetyHandler;	// 48 = 0x30
    CDUnknownBlockType _cancelBlock;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0020000000126922
@property(readonly, nonatomic) NSArray *assetEntries; // @synthesize assetEntries=_assetEntries;
- (int)publish;	// IMP=0x0010000000126828
- (int)process;	// IMP=0x0010000000126169
- (int)prepare;	// IMP=0x0010000000126079
- (void)addAssetEntry:(id)arg1;	// IMP=0x0010000000126063
@property(readonly, nonatomic) NSString *queueName;
@property(readonly, nonatomic) NSString *logPrefix;
@property(readonly, nonatomic) unsigned long long count;
- (id)initWithCancelBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000125bb8

@end
