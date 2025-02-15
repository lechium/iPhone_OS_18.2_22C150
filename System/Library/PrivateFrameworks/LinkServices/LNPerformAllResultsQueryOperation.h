//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class LNQueryOutput, NSString;

__attribute__((visibility("hidden")))
@interface LNPerformAllResultsQueryOperation
{
    NSString *_entityType;	// 8 = 0x8
    NSString *_entityMangledTypeName;	// 16 = 0x10
    CDUnknownBlockType _completionHandler;	// 24 = 0x18
    LNQueryOutput *_output;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000d2ef1
@property(copy, nonatomic) LNQueryOutput *output; // @synthesize output=_output;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(copy, nonatomic) NSString *entityMangledTypeName; // @synthesize entityMangledTypeName=_entityMangledTypeName;
@property(copy, nonatomic) NSString *entityType; // @synthesize entityType=_entityType;
- (void)finishWithError:(id)arg1;	// IMP=0x00000000000d2d2a
- (void)start;	// IMP=0x00000000000d2c64
- (id)initWithConnectionInterface:(id)arg1 entityMangledTypeName:(id)arg2 queue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000d299e

@end

