//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, PRSQueryTask, SSPlistDataReader;

@interface SPParsecArchive : NSObject
{
    _Bool _suggestionsAreBlended;	// 8 = 0x8
    PRSQueryTask *_query;	// 16 = 0x10
    NSArray *_resultsSections;	// 24 = 0x18
    NSArray *_suggestions;	// 32 = 0x20
    NSArray *_corrections;	// 40 = 0x28
    SSPlistDataReader *_cepDictionary;	// 48 = 0x30
    SSPlistDataReader *_cannedCEPValues;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000007ccd7
+ (id)archiveBasePath;	// IMP=0x001000000007cb11
+ (void)deleteArchives;	// IMP=0x001000000007ca98
+ (id)archivePathForQuery:(id)arg1;	// IMP=0x001000000007c998
- (void).cxx_destruct;	// IMP=0x002000000007d244
@property _Bool suggestionsAreBlended; // @synthesize suggestionsAreBlended=_suggestionsAreBlended;
@property(retain) SSPlistDataReader *cannedCEPValues; // @synthesize cannedCEPValues=_cannedCEPValues;
@property(retain) SSPlistDataReader *cepDictionary; // @synthesize cepDictionary=_cepDictionary;
@property(retain) NSArray *corrections; // @synthesize corrections=_corrections;
@property(retain) NSArray *suggestions; // @synthesize suggestions=_suggestions;
@property(retain) NSArray *resultsSections; // @synthesize resultsSections=_resultsSections;
@property(retain) PRSQueryTask *query; // @synthesize query=_query;
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000007ce99
- (struct _MDPlistContainer *)decodeMDPlistContainerWithCoder:(id)arg1 forKey:(id)arg2;	// IMP=0x001000000007cdf5
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000007ccdf
- (id)initWithQuery:(id)arg1 withResults:(id)arg2 withSuggestions:(id)arg3 withCorrections:(id)arg4 suggestionsAreBlended:(_Bool)arg5 withStore:(id)arg6;	// IMP=0x001000000007cb5f

@end

