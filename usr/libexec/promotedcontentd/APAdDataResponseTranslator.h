//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class APContext, NSString;

@interface APAdDataResponseTranslator
{
    NSString *_contentIdentifier;	// 8 = 0x8
    APContext *_context;	// 16 = 0x10
    long long _placement;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000000bfe55
@property(nonatomic) long long placement; // @synthesize placement=_placement;
@property(retain, nonatomic) APContext *context; // @synthesize context=_context;
@property(retain, nonatomic) NSString *contentIdentifier; // @synthesize contentIdentifier=_contentIdentifier;
- (id)translate:(id *)arg1;	// IMP=0x00100000000bfab6
- (id)initWithResponse:(id)arg1 forRequester:(id)arg2 contentIdentifier:(id)arg3 withContext:(id)arg4 placement:(long long)arg5;	// IMP=0x00100000000bf9f1

@end

