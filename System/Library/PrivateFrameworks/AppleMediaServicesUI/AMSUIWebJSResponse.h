//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSUIWebJSRequest, NSDictionary;

__attribute__((visibility("hidden")))
@interface AMSUIWebJSResponse : NSObject
{
    NSDictionary *_body;	// 8 = 0x8
    double _duration;	// 16 = 0x10
    AMSUIWebJSRequest *_originalRequest;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000be7a8
- (void).cxx_destruct;	// IMP=0x00000000000bea6b
@property(readonly, nonatomic) AMSUIWebJSRequest *originalRequest; // @synthesize originalRequest=_originalRequest;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSDictionary *body; // @synthesize body=_body;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000be87f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000be7b0
- (id)initWithRequest:(id)arg1 duration:(double)arg2;	// IMP=0x00000000000be72d

@end

