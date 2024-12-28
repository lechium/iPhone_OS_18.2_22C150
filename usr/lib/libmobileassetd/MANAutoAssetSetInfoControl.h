//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface MANAutoAssetSetInfoControl : NSObject
{
    _Bool _clearingAfter;	// 8 = 0x8
    NSArray *_limitedToClientDomains;	// 16 = 0x10
    NSArray *_limitedToSetIdentifiers;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000023e355
- (void).cxx_destruct;	// IMP=0x000000000023e6ee
@property(readonly, retain, nonatomic) NSArray *limitedToSetIdentifiers; // @synthesize limitedToSetIdentifiers=_limitedToSetIdentifiers;
@property(readonly, retain, nonatomic) NSArray *limitedToClientDomains; // @synthesize limitedToClientDomains=_limitedToClientDomains;
@property(readonly, nonatomic) _Bool clearingAfter; // @synthesize clearingAfter=_clearingAfter;
- (id)_arrayStringsToString:(id)arg1;	// IMP=0x000000000023e4ed
- (id)summary;	// IMP=0x000000000023e36f
- (id)description;	// IMP=0x000000000023e35d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000023e283
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000023e081
- (id)initClearingAfter:(_Bool)arg1 limitedToClientDomains:(id)arg2 limitedToSetIdentifiers:(id)arg3;	// IMP=0x000000000023dfdf
- (id)initClearingAfter:(_Bool)arg1 limitedToClientDomains:(id)arg2;	// IMP=0x000000000023dfca
- (id)initClearingAfter:(_Bool)arg1 limitedToSetIdentifiers:(id)arg2;	// IMP=0x000000000023dfb3
- (id)initClearingAfter:(_Bool)arg1;	// IMP=0x000000000023df9f

@end
