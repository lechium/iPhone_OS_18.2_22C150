//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface BCSCalendarEventData : NSObject
{
    NSString *_icsString;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000000b0fe
- (void).cxx_destruct;	// IMP=0x000000000000b110
@property(readonly, copy, nonatomic) NSString *icsString; // @synthesize icsString=_icsString;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000b0db
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000b04e
@property(readonly, copy, nonatomic) NSString *extraPreviewText;
@property(readonly, nonatomic) long long type;
- (id)initWithICSString:(id)arg1;	// IMP=0x000000000000afb1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
