//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FeedbackCore/NSObject-Protocol.h>

@class FBKUploadTask, NSNumber, NSSet, NSString;

@protocol FBKFilerForm <NSObject>
@property(nonatomic) long long filerFormType;
@property(readonly) NSString *platform;
@property(retain) FBKUploadTask *uploadTask;
- (_Bool)collectsFiles;
- (NSNumber *)filerFormID;
- (_Bool)isServerSideComplete;
- (_Bool)needsRefresh;
- (NSSet *)matcherPredicates;
- (NSSet *)promises;
@end

