//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface HNDRepostedButtonEventInfo : NSObject
{
    unsigned int _buttonMask;	// 8 = 0x8
    unsigned long long _timestamp;	// 16 = 0x10
}

@property(nonatomic) unsigned int buttonMask; // @synthesize buttonMask=_buttonMask;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (id)description;	// IMP=0x0010000000082898
- (unsigned long long)hash;	// IMP=0x001000000008285a
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000082795

@end
