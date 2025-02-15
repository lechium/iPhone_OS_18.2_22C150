//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDictionary, NSString, VUIAppContext;

__attribute__((visibility("hidden")))
@interface VUIActionPlaylist
{
    _Bool _requiresAuthentication;	// 8 = 0x8
    NSDictionary *_contextData;	// 16 = 0x10
    VUIAppContext *_appContext;	// 24 = 0x18
    NSArray *_videosPlayable;	// 32 = 0x20
    unsigned long long _index;	// 40 = 0x28
    NSDictionary *_collectionViewModel;	// 48 = 0x30
    NSArray *_clipItems;	// 56 = 0x38
    NSArray *_metadataViewModels;	// 64 = 0x40
    NSString *_nextToken;	// 72 = 0x48
    NSString *_trailerEndpoint;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000000045a0b
@property(readonly, nonatomic) NSString *trailerEndpoint; // @synthesize trailerEndpoint=_trailerEndpoint;
@property(readonly, nonatomic) NSString *nextToken; // @synthesize nextToken=_nextToken;
@property(readonly, nonatomic) _Bool requiresAuthentication; // @synthesize requiresAuthentication=_requiresAuthentication;
@property(retain, nonatomic) NSArray *metadataViewModels; // @synthesize metadataViewModels=_metadataViewModels;
@property(retain, nonatomic) NSArray *clipItems; // @synthesize clipItems=_clipItems;
@property(retain, nonatomic) NSDictionary *collectionViewModel; // @synthesize collectionViewModel=_collectionViewModel;
@property(readonly, nonatomic) unsigned long long index; // @synthesize index=_index;
@property(retain, nonatomic) NSArray *videosPlayable; // @synthesize videosPlayable=_videosPlayable;
@property(nonatomic) __weak VUIAppContext *appContext; // @synthesize appContext=_appContext;
@property(retain, nonatomic) NSDictionary *contextData; // @synthesize contextData=_contextData;
- (_Bool)isAccountRequired;	// IMP=0x00000000000458d0
- (void)_presentViewController:(CDUnknownBlockType)arg1;	// IMP=0x00000000000449b0
- (id)_maxContentRating;	// IMP=0x000000000004480e
- (id)_ratingValue;	// IMP=0x000000000004476d
- (id)_ratingDomain;	// IMP=0x0000000000044659
- (void)performWithTargetResponder:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000004407d
- (id)initWithContextData:(id)arg1 appContext:(id)arg2;	// IMP=0x0000000000043e0e

@end

