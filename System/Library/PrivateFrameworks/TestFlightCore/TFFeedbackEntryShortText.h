//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface TFFeedbackEntryShortText
{
    NSString *_placeholder;	// 8 = 0x8
    unsigned long long _contentType;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000011d55
@property(readonly, nonatomic) unsigned long long contentType; // @synthesize contentType=_contentType;
@property(readonly, copy, nonatomic) NSString *placeholder; // @synthesize placeholder=_placeholder;
- (id)initWithIdentifier:(id)arg1 title:(id)arg2 placeholder:(id)arg3 contentType:(unsigned long long)arg4;	// IMP=0x0000000000011c91

@end

