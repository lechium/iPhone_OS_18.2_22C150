//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AvatarUI/NSObject-Protocol.h>

@protocol AVTAvatarListItem <NSObject>
- (void)downcastWithRecordHandler:(void (^)(AVTAvatarListRecordItem *))arg1 imageHandler:(void (^)(AVTAvatarListImageItem *))arg2 viewHandler:(void (^)(AVTAvatarListViewItem *))arg3;
- (void)downcastWithRecordHandler:(void (^)(AVTAvatarListRecordItem *))arg1 viewHandler:(void (^)(AVTAvatarListViewItem *))arg2;
@end

