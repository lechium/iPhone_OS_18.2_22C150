//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol NDStatusMonitorClient;

@interface NDStatusMonitorClientHolder : NSObject
{
    id <NDStatusMonitorClient> _client;	// 8 = 0x8
    unsigned long long _identifier;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000046020
@property(nonatomic) unsigned long long identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) id <NDStatusMonitorClient> client; // @synthesize client=_client;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000045f80
- (unsigned long long)hash;	// IMP=0x0010000000045f72
- (id)initWithClient:(id)arg1 identifier:(unsigned long long)arg2;	// IMP=0x0010000000045ee7

@end
