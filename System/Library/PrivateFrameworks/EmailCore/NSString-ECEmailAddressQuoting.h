//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@class ECEmailAddress;

@interface NSString (ECEmailAddressQuoting)
+ (id)ec_partialSurnames;	// IMP=0x0010000000032e85
+ (id)ec_nameExtensions;	// IMP=0x0010000000032d3d
+ (void)__ec_extractFirstName:(id *)arg1 middleName:(id *)arg2 lastName:(id *)arg3 extension:(id *)arg4 fromString:(id)arg5;	// IMP=0x0010000000032178
@property(readonly, copy, nonatomic) NSString *ecemailaddress_uniquedDomain;
- (id)ecemailaddress_quotedString;	// IMP=0x001000000001861c
@property(readonly, copy, nonatomic) NSString *ecemailaddress_trimmedAndQuotedDisplayName;
@property(readonly, copy, nonatomic) NSString *ecemailaddress_trimmedAndQuotedLocalPart;
@property(readonly, nonatomic) NSString *stringValue;
@property(readonly, nonatomic) ECEmailAddress *emailAddressValue;
@property(readonly) _Bool ec_isHorizontalSeparator;
- (_Bool)ec_isSignature;	// IMP=0x001000000002cc33
- (_Bool)ec_isForwardSeparator;	// IMP=0x001000000002cbcb
- (_Bool)ec_isAttributionPrefix;	// IMP=0x001000000002cb63
- (_Bool)ec_isAttribution;	// IMP=0x001000000002cafb
- (_Bool)ec_isWhitespace;	// IMP=0x001000000002ca88
@property(readonly, copy) NSString *ec_messageIDSubstring;
- (id)ec_trimCommasSpacesQuotes;	// IMP=0x0010000000032fcf
- (_Bool)ec_appearsToBeAnInitial;	// IMP=0x0010000000032f63
- (id)ec_personNameComponents;	// IMP=0x0010000000032009
- (unsigned int)ec_parseHTMLEntityCharacter;	// IMP=0x00100000000456a0
- (id)ec_parseHTMLEntity;	// IMP=0x0010000000045218

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
