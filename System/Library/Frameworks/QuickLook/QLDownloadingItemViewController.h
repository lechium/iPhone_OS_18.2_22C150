//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "QLDetailItemViewController.h"

@class QLDetailItemViewControllerState, QLItem, QLRoundProgressView, UIImage, UIImageView;
@protocol QLDownloadingItemViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface QLDownloadingItemViewController : QLDetailItemViewController
{
    _Bool _downloading;	// 8 = 0x8
    _Bool _downloaded;	// 9 = 0x9
    _Bool _didDisappear;	// 10 = 0xa
    id _progressSubscriber;	// 16 = 0x10
    QLRoundProgressView *_progressView;	// 24 = 0x18
    QLDetailItemViewControllerState *_readyForDownloadState;	// 32 = 0x20
    QLDetailItemViewControllerState *_cancelableDownloadingState;	// 40 = 0x28
    QLDetailItemViewControllerState *_nonCancelableDownloadingState;	// 48 = 0x30
    QLDetailItemViewControllerState *_completedDownloadState;	// 56 = 0x38
    QLDetailItemViewControllerState *_previewLoadingState;	// 64 = 0x40
    UIImageView *_downloadImageView;	// 72 = 0x48
    UIImage *_cloudImage;	// 80 = 0x50
    QLItem *_previewItem;	// 88 = 0x58
    _Bool _showsLoadingPreviewSpinner;	// 96 = 0x60
    id <QLDownloadingItemViewControllerDelegate> _downloadingDelegate;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x000000000008ee25
@property(nonatomic) _Bool showsLoadingPreviewSpinner; // @synthesize showsLoadingPreviewSpinner=_showsLoadingPreviewSpinner;
@property(nonatomic) _Bool downloaded; // @synthesize downloaded=_downloaded;
@property(nonatomic) __weak id <QLDownloadingItemViewControllerDelegate> downloadingDelegate; // @synthesize downloadingDelegate=_downloadingDelegate;
@property(readonly, nonatomic) QLRoundProgressView *progressView; // @synthesize progressView=_progressView;
- (void)_startDownloadOperation;	// IMP=0x000000000008e674
- (void)_presentConnectivityAlert;	// IMP=0x000000000008e628
- (void)_setDownloading:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x000000000008e527
- (void)_stopDownload:(_Bool)arg1;	// IMP=0x000000000008e455
- (void)_startDownload:(_Bool)arg1;	// IMP=0x000000000008e349
- (void)startDownloadIfNeeded;	// IMP=0x000000000008e29f
- (void)startDownload:(_Bool)arg1;	// IMP=0x000000000008e107
- (void)_toggleDownload:(_Bool)arg1;	// IMP=0x000000000008e0dc
- (void)performAction;	// IMP=0x000000000008e082
- (void)previewDidDisappear:(_Bool)arg1;	// IMP=0x000000000008e071
- (void)previewDidAppear:(_Bool)arg1;	// IMP=0x000000000008e042
- (void)_updateFileSizeWithProgress:(double)arg1 animated:(_Bool)arg2;	// IMP=0x000000000008ddb5
- (_Bool)shouldAutoDownloadInNetworkState:(unsigned long long)arg1 downloadSize:(id)arg2 forceIfPossible:(_Bool)arg3;	// IMP=0x000000000008dba5
- (void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000008da84
- (void)setAppearance:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000000008d9c7
- (void)viewDidLoad;	// IMP=0x000000000008d648

@end

