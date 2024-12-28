//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSSet, NSString, _EARPeopleSuggesterConfig;

@interface _EARUserProfileBuilder : NSObject
{
    NSString *_language;	// 8 = 0x8
    struct LmePackedUserData _userData;	// 16 = 0x10
    struct shared_ptr<quasar::LmeDataFactory> _dataFactory;	// 56 = 0x38
    unique_ptr_69213b6f _tokenizer;	// 72 = 0x48
    struct unique_ptr<quasar::G2P, std::default_delete<quasar::G2P>> _g2p;	// 80 = 0x50
    struct unique_ptr<quasar::G2Embedding, std::default_delete<quasar::G2Embedding>> _g2emb;	// 88 = 0x58
    struct shared_ptr<quasar::PronCache<std::string, std::vector<std::string>>> _pronCache;	// 96 = 0x60
    struct BasicTextSanitizer _sanitizer;	// 112 = 0x70
    struct unique_ptr<quasar::PersonalizationRecipe, std::default_delete<quasar::PersonalizationRecipe>> _personalizationRecipe;	// 272 = 0x110
    shared_ptr_4c8a54ee _quasarLmeData;	// 280 = 0x118
    _Bool _reuseProfile;	// 296 = 0x128
    struct unique_ptr<quasar::WordPronCache, std::default_delete<quasar::WordPronCache>> _outPronCache;	// 304 = 0x130
    int _outPronCacheHits;	// 312 = 0x138
    int _outPronCacheMisses;	// 316 = 0x13c
    int _wordsRejected;	// 320 = 0x140
    int _wordsAccepted;	// 324 = 0x144
    struct unordered_map<std::string, int, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, int>>> _quasarTemplate2Count;	// 328 = 0x148
    struct set<std::vector<std::string>, quasar::NameEnumerator::EnumComparator, std::allocator<std::vector<std::string>>> _contactEnumSet;	// 368 = 0x170
    struct shared_ptr<quasar::PronCache<std::string, std::vector<std::string>>> _embeddingCache;	// 392 = 0x188
    struct unique_ptr<quasar::WordPronCache, std::default_delete<quasar::WordPronCache>> _outEmbeddingCache;	// 408 = 0x198
    int _outEmbeddingCacheHits;	// 416 = 0x1a0
    int _outEmbeddingCacheMisses;	// 420 = 0x1a4
    struct map<std::string, long long, std::less<std::string>, std::allocator<std::pair<const std::string, long long>>> _templateToVersion;	// 424 = 0x1a8
    struct set<std::string, std::less<std::string>, std::allocator<std::string>> _experimentIds;	// 448 = 0x1c0
    NSString *_userId;	// 472 = 0x1d8
}

+ (_Bool)isEasyToRecognizeWord:(id)arg1 forLocale:(id)arg2;	// IMP=0x0060000000096911
+ (void)initialize;	// IMP=0x00600000000968d1
- (id).cxx_construct;	// IMP=0x00000000000a0426
- (void).cxx_destruct;	// IMP=0x00000000000a02c9
@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
- (void)_logLmeSlotUpdatedEventsWithLanguage:(basic_string_76cbfbed)arg1 numEnumeratedEntries:(map_54b166ff)arg2;	// IMP=0x000000000009fee5
- (void)_logSpeechProfileUpdatedEventWithLmeData:(shared_ptr_4c8a54ee)arg1 sizeInBytes:(int)arg2 numEnumeratedEntries:(map_54b166ff)arg3;	// IMP=0x000000000009f9c0
@property(readonly, nonatomic) _EARPeopleSuggesterConfig *peopleSuggesterConfig;
- (id)createInlineLmeUserDataForContextData:(id)arg1 speechProfile:(id)arg2;	// IMP=0x000000000009ed36
- (void)createInlineLmeUserDataForContextStrings:(id)arg1;	// IMP=0x000000000009ea3a
- (void)signalEndOfUserData;	// IMP=0x000000000009ea19
- (id)sanitizedStringWithString:(id)arg1;	// IMP=0x000000000009e917
- (void)_embeddingsForOrthography:(const void *)arg1 templateName:(const void *)arg2 embeddings:(void *)arg3 pronRequest:(int)arg4;	// IMP=0x000000000009e52c
- (void)_pronunciationsForOrthography:(const void *)arg1 phoneticOrthography:(const void *)arg2 templateName:(const void *)arg3 pronunciations:(void *)arg4 pronRequest:(int)arg5 outOrthography:(void *)arg6;	// IMP=0x000000000009d264
- (id)pronunciationsForOrthography:(id)arg1;	// IMP=0x000000000009cfbd
- (void)writeOutUserDataToJson:(id)arg1 withConfig:(id)arg2;	// IMP=0x000000000009cdcc
- (void)addPersonalizationJsonData:(id)arg1;	// IMP=0x000000000009cb50
- (void)addPersonalizationData:(id)arg1;	// IMP=0x000000000009c936
- (void)readUserProfileWithPath:(id)arg1;	// IMP=0x000000000009c5f3
- (void)readUserProfileWithPath:(id)arg1 reuseProfile:(_Bool)arg2;	// IMP=0x000000000009c5db
- (void)readUserProfile:(id)arg1;	// IMP=0x000000000009c328
- (void)readUserProfile:(id)arg1 reuseProfile:(_Bool)arg2;	// IMP=0x000000000009c310
- (_Bool)writeProfileToFile:(id)arg1 protectionClass:(long long)arg2 coordinated:(_Bool)arg3 length:(unsigned long long *)arg4 error:(id *)arg5;	// IMP=0x000000000009b7d8
- (_Bool)writeProfileToFile:(id)arg1 protectionClass:(long long)arg2 length:(unsigned long long *)arg3 error:(id *)arg4;	// IMP=0x000000000009b7ad
- (id)dataProfile;	// IMP=0x000000000009b660
- (_Bool)_writeProfileToStream:(void *)arg1;	// IMP=0x000000000009aad1
@property(copy, nonatomic) NSSet *experimentIds;
@property(copy, nonatomic) NSDictionary *templateToVersion;
- (void)removeLmeDataForTemplateName:(id)arg1;	// IMP=0x000000000009a2eb
- (void)removeAllWords;	// IMP=0x000000000009a174
- (void)addWordWithParts:(id)arg1 templateName:(id)arg2;	// IMP=0x0000000000098e40
- (id)initWithConfiguration:(id)arg1 language:(id)arg2 overrides:(id)arg3 textNormalizationModelRoot:(id)arg4 sdapiOverrides:(id)arg5 emptyVoc:(id)arg6 pgVoc:(id)arg7 paramsetHolder:(id)arg8 isJit:(_Bool)arg9;	// IMP=0x0000000000097a66
- (id)initWithConfiguration:(id)arg1 language:(id)arg2 overrides:(id)arg3 sdapiOverrides:(id)arg4 emptyVoc:(id)arg5 pgVoc:(id)arg6 paramsetHolder:(id)arg7 isJit:(_Bool)arg8;	// IMP=0x0000000000097a28
- (id)initWithConfiguration:(id)arg1 language:(id)arg2 overrides:(id)arg3 sdapiOverrides:(id)arg4 emptyVoc:(id)arg5 pgVoc:(id)arg6 paramsetHolder:(id)arg7;	// IMP=0x00000000000979f4
- (id)initWithConfiguration:(id)arg1 language:(id)arg2 overrides:(id)arg3 sdapiOverrides:(id)arg4 generalVoc:(id)arg5 emptyVoc:(id)arg6 pgVoc:(id)arg7 lexiconEnh:(id)arg8 tokenEnh:(id)arg9 paramsetHolder:(id)arg10 isJit:(_Bool)arg11;	// IMP=0x000000000009783a
- (id)initWithConfiguration:(id)arg1 language:(id)arg2 overrides:(id)arg3 sdapiOverrides:(id)arg4 generalVoc:(id)arg5 emptyVoc:(id)arg6 pgVoc:(id)arg7 lexiconEnh:(id)arg8 tokenEnh:(id)arg9 paramsetHolder:(id)arg10;	// IMP=0x00000000000977fd
- (id)initWithConfiguration:(id)arg1 language:(id)arg2 sdapiOverrides:(id)arg3 generalVoc:(id)arg4 emptyVoc:(id)arg5 pgVoc:(id)arg6 lexiconEnh:(id)arg7 tokenEnh:(id)arg8 paramsetHolder:(id)arg9;	// IMP=0x00000000000977ba
- (id)initWithConfiguration:(id)arg1 withLanguage:(id)arg2 withSdapiOverrides:(id)arg3 withSdapiConfig:(id)arg4;	// IMP=0x00000000000969f0

@end
