//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MPAsyncOperation.h"

@class ICStoreURLRequest, NSObject;
@protocol MPStoreSocialRequestOperationDataSource, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MPStoreSocialRequestOperation : MPAsyncOperation
{
    NSObject<OS_dispatch_queue> *_accessQueue;	// 8 = 0x8
    ICStoreURLRequest *_request;	// 16 = 0x10
    id <MPStoreSocialRequestOperationDataSource> _dataSource;	// 24 = 0x18
    CDUnknownBlockType _responseHandler;	// 32 = 0x20
}

+ (id)_urlStringForKey:(id)arg1 inBag:(id)arg2;	// IMP=0x0060000000251375
+ (id)_stringRepresentationForHTTPMethod:(long long)arg1;	// IMP=0x006000000025135b
+ (id)_stringRepresentationForHTTPBodyType:(long long)arg1;	// IMP=0x0060000000251336
- (void).cxx_destruct;	// IMP=0x0000000000250c7f
@property(copy, nonatomic) CDUnknownBlockType responseHandler; // @synthesize responseHandler=_responseHandler;
@property(readonly, nonatomic) id <MPStoreSocialRequestOperationDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (id)_requestURLFromBag:(id)arg1;	// IMP=0x0000000000250955
- (void)execute;	// IMP=0x0000000000250813
- (void)cancel;	// IMP=0x000000000025078b
- (id)initWithDataSource:(id)arg1;	// IMP=0x0000000000250661

@end

