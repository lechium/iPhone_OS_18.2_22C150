//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

__attribute__((visibility("hidden")))
@interface LNFetchViewActionsConnectionOperation
{
    CDUnknownBlockType _completionHandler;	// 8 = 0x8
    NSArray *_result;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000008e9f2
@property(retain, nonatomic) NSArray *result; // @synthesize result=_result;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void)finishWithError:(id)arg1;	// IMP=0x000000000008e86c
- (void)start;	// IMP=0x000000000008e773
- (id)initWithConnectionInterface:(id)arg1 queue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000008e585

@end
