//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIDateLabel.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CKDateLabel : UIDateLabel
{
    NSString *_textForOverride;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000050e68a
@property(retain, nonatomic) NSString *textForOverride; // @synthesize textForOverride=_textForOverride;
- (id)text;	// IMP=0x000000000050e620
- (id)_dateString;	// IMP=0x000000000050e5c7
- (void)setDate:(id)arg1;	// IMP=0x000000000050e56a

@end
