//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSURL;

__attribute__((visibility("hidden")))
@interface GTReplayLoadRequest
{
    NSURL *_gputraceURL;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000000422f
- (void).cxx_destruct;	// IMP=0x00000000000043b4
@property(retain, nonatomic) NSURL *gputraceURL; // @synthesize gputraceURL=_gputraceURL;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000004317
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000004237

@end

