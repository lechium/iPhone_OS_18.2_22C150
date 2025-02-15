//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ASCScreenshots, ASCTrailers, NSString;

__attribute__((visibility("hidden")))
@interface ASCLockupFeatureMedia : NSObject
{
    ASCScreenshots *_screenshots;	// 8 = 0x8
    ASCTrailers *_trailers;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000002b803
- (void).cxx_destruct;	// IMP=0x000000000002bcdf
@property(readonly, copy, nonatomic) ASCTrailers *trailers; // @synthesize trailers=_trailers;
@property(readonly, copy, nonatomic) ASCScreenshots *screenshots; // @synthesize screenshots=_screenshots;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000002ba38
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002b97b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000002b8cd
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000002b80b
- (id)initWithScreenshots:(id)arg1 trailers:(id)arg2;	// IMP=0x000000000002b74a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) Class superclass;

@end

