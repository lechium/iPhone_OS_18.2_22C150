//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface GTCaptureUpdateHighlight
{
    _Bool _enable;	// 8 = 0x8
    unsigned long long _streamRef;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00200000000039eb
@property(nonatomic) _Bool enable; // @synthesize enable=_enable;
@property(nonatomic) unsigned long long streamRef; // @synthesize streamRef=_streamRef;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000003aa7
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000000039f3

@end
