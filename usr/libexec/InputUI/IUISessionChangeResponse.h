//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface IUISessionChangeResponse : NSObject
{
    long long _responseState;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000000265c
@property(readonly, nonatomic) long long responseState; // @synthesize responseState=_responseState;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000026c5
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000002687
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000002664
- (id)initWithResponseState:(long long)arg1;	// IMP=0x001000000000261f

@end
