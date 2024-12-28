//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

__attribute__((visibility("hidden")))
@interface LNFetchViewEntitiesConnectionOperation
{
    NSArray *_interactionIDs;	// 8 = 0x8
    CDUnknownBlockType _completionHandler;	// 16 = 0x10
    NSArray *_result;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000a4dcb
@property(retain, nonatomic) NSArray *result; // @synthesize result=_result;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(copy) NSArray *interactionIDs; // @synthesize interactionIDs=_interactionIDs;
- (void)finishWithError:(id)arg1;	// IMP=0x00000000000a4c1e
- (void)start;	// IMP=0x00000000000a4b1a
- (id)initWithConnectionInterface:(id)arg1 queue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000a4b00
- (id)initWithConnectionInterface:(id)arg1 interactionIDs:(id)arg2 queue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000a48e4

@end
