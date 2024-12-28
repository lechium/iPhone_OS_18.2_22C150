//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WebBookmarks/NSObject-Protocol.h>

@class NSString, WBSCRDTPosition, WBSNamedColorOption;

@protocol WBSProfileMetadataProviding <NSObject>
@property(readonly, copy, nonatomic) WBSNamedColorOption *color;
@property(readonly, copy, nonatomic) WBSCRDTPosition *syncPosition;
@property(readonly, copy, nonatomic) NSString *symbolImageName;
@property(readonly, nonatomic) int databaseIdentifier;
@property(readonly, copy, nonatomic) NSString *identifier;
@property(readonly, copy, nonatomic) NSString *serverID;
@property(readonly, copy, nonatomic) NSString *title;
- (id)settingForKey:(NSString *)arg1;
@end
