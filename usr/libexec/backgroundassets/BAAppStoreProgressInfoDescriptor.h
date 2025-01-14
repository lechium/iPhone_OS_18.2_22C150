//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface BAAppStoreProgressInfoDescriptor : NSObject
{
    long long _progressState;	// 8 = 0x8
    long long _countOfBytesExpectedToReceive;	// 16 = 0x10
    long long _countOfBytesReceived;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000000a73d
@property(readonly, nonatomic) long long countOfBytesReceived; // @synthesize countOfBytesReceived=_countOfBytesReceived;
@property(readonly, nonatomic) long long countOfBytesExpectedToReceive; // @synthesize countOfBytesExpectedToReceive=_countOfBytesExpectedToReceive;
@property(readonly, nonatomic) long long progressState; // @synthesize progressState=_progressState;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000000a745
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000000a69d
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000000a5f2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) Class superclass;

@end

