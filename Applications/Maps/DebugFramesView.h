//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class NSMutableDictionary, NSMutableOrderedSet;

@interface DebugFramesView : UIView
{
    NSMutableOrderedSet *_names;	// 8 = 0x8
    NSMutableDictionary *_framesByName;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000ee911c
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x0010000000ee81ad
- (void)setLayoutGuide:(id)arg1 forName:(id)arg2;	// IMP=0x0010000000ee80fb
- (void)setFrame:(struct CGRect)arg1 forName:(id)arg2;	// IMP=0x0010000000ee802c
- (void)unregisterAll;	// IMP=0x0010000000ee7fe3
- (void)unregisterName:(id)arg1;	// IMP=0x0010000000ee7f5e
- (void)registerName:(id)arg1 color:(id)arg2 weight:(double)arg3 edges:(unsigned long long)arg4;	// IMP=0x0010000000ee7e4a
- (void)layoutSubviews;	// IMP=0x0010000000ee7dd9
- (void)didMoveToSuperview;	// IMP=0x0010000000ee7d68
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0010000000ee7c54

@end

