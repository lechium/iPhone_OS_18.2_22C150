//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol SFPeopleSuggestion;

__attribute__((visibility("hidden")))
@interface SFUIPeopleSuggestionImageRequest
{
    id <SFPeopleSuggestion> _peopleSuggestion;	// 8 = 0x8
    long long _type;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000032aae
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) id <SFPeopleSuggestion> peopleSuggestion; // @synthesize peopleSuggestion=_peopleSuggestion;
- (id)initWithRequestID:(int)arg1 peopleSuggestion:(id)arg2 type:(long long)arg3 resultHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000003299f

@end

