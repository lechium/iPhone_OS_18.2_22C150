//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface GTCaptureUpdateHighlight
{
    _Bool _enable;	// 8 = 0x8
    unsigned long long _streamRef;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000000cd9c
@property(nonatomic) _Bool enable; // @synthesize enable=_enable;
@property(nonatomic) unsigned long long streamRef; // @synthesize streamRef=_streamRef;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000ce58
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000cda4

@end

