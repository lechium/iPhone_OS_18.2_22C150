//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UITableViewController.h>

@class PUParallaxLayerStackView;

__attribute__((visibility("hidden")))
@interface PUParallaxLayerStackDebugTableViewController : UITableViewController
{
    PUParallaxLayerStackView *_layerStackView;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000005ccbbc
@property(retain, nonatomic) PUParallaxLayerStackView *layerStackView; // @synthesize layerStackView=_layerStackView;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;	// IMP=0x00000000005cc675
- (_Bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;	// IMP=0x00000000005cc66d
- (void)requestNewZPositionForCellAtIndexPath:(id)arg1;	// IMP=0x00000000005cc3b9
- (id)tableView:(id)arg1 contextMenuConfigurationForRowAtIndexPath:(id)arg2 point:(struct CGPoint)arg3;	// IMP=0x00000000005cc2ad
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000000005cc10c
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x00000000005cc0fe
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000000005cbc57
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00000000005cbba6
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x00000000005cbb9b
- (id)layerForIndexPath:(id)arg1;	// IMP=0x00000000005cbb08
- (id)layersSortedByViewDepth;	// IMP=0x00000000005cb9d5
- (id)labelForLayer:(id)arg1;	// IMP=0x00000000005cb9c0
- (void)viewDidLoad;	// IMP=0x00000000005cb885

@end
