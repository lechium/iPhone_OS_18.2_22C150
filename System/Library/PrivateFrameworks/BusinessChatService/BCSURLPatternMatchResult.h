//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSString, NSURL;
@protocol BCSDateHelperProtocol;

__attribute__((visibility("hidden")))
@interface BCSURLPatternMatchResult : NSObject
{
    NSURL *_originalURL;	// 8 = 0x8
    NSURL *_extractedURL;	// 16 = 0x10
    NSString *_pattern;	// 24 = 0x18
    NSString *_bundleID;	// 32 = 0x20
    unsigned long long _totalConsecutivePrefixMatches;	// 40 = 0x28
    unsigned long long _totalExactMatches;	// 48 = 0x30
    unsigned long long _totalAnyMatches;	// 56 = 0x38
    id <BCSDateHelperProtocol> _dateHelper;	// 64 = 0x40
    NSDate *_expirationDate;	// 72 = 0x48
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000000ca4a
- (void).cxx_destruct;	// IMP=0x000000000000cabb
@property(copy, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(readonly, nonatomic) id <BCSDateHelperProtocol> dateHelper; // @synthesize dateHelper=_dateHelper;
@property(readonly, nonatomic) unsigned long long totalAnyMatches; // @synthesize totalAnyMatches=_totalAnyMatches;
@property(readonly, nonatomic) unsigned long long totalExactMatches; // @synthesize totalExactMatches=_totalExactMatches;
@property(readonly, nonatomic) unsigned long long totalConsecutivePrefixMatches; // @synthesize totalConsecutivePrefixMatches=_totalConsecutivePrefixMatches;
@property(readonly, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(readonly, nonatomic) NSString *pattern; // @synthesize pattern=_pattern;
@property(readonly, nonatomic) NSURL *extractedURL; // @synthesize extractedURL=_extractedURL;
@property(readonly, nonatomic) NSURL *originalURL; // @synthesize originalURL=_originalURL;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x000000000000c8d1
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x000000000000c881
- (id)succinctDescriptionBuilder;	// IMP=0x000000000000c6a2
- (id)succinctDescription;	// IMP=0x000000000000c652
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool matchFound;
@property(readonly, nonatomic, getter=isExpired) _Bool expired;
- (id)initWithOriginalURL:(id)arg1 extractedURL:(id)arg2 totalConsecutivePrefixMatches:(unsigned long long)arg3 totalExactMatches:(unsigned long long)arg4 totalAnyMatches:(unsigned long long)arg5 bundleID:(id)arg6 pattern:(id)arg7 expirationDate:(id)arg8 dateHelper:(id)arg9;	// IMP=0x000000000000c3f7

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

