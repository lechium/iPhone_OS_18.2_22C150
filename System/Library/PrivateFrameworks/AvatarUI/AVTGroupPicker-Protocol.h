//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AvatarUI/NSObject-Protocol.h>

@class AVTUIEnvironment, NSArray, NSCoder;
@protocol AVTGroupPickerDelegate;

@protocol AVTGroupPicker <NSObject>
@property(nonatomic) long long selectedGroupIndex;
@property(nonatomic) __weak id <AVTGroupPickerDelegate> delegate;
@property(readonly, nonatomic) NSArray *groupItems;
- (void)setSelectedGroupIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)reloadData;
- (id)initWithCoder:(NSCoder *)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithGroupItems:(NSArray *)arg1 environment:(AVTUIEnvironment *)arg2;
@end

