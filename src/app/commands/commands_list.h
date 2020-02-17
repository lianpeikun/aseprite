// Aseprite
// Copyright (C) 2018-2020  Igara Studio S.A.
// Copyright (C) 2001-2018  David Capello
//
// This program is distributed under the terms of
// the End-User License Agreement for Aseprite.

FOR_EACH_COMMAND(AddColor)
FOR_EACH_COMMAND(AutocropSprite)
FOR_EACH_COMMAND(BackgroundFromLayer)
FOR_EACH_COMMAND(BrightnessContrast)
FOR_EACH_COMMAND(CanvasSize)
FOR_EACH_COMMAND(CelOpacity)
FOR_EACH_COMMAND(ChangePixelFormat)
FOR_EACH_COMMAND(ColorCurve)
FOR_EACH_COMMAND(ColorQuantization)
FOR_EACH_COMMAND(ConvolutionMatrix)
FOR_EACH_COMMAND(CopyColors)
FOR_EACH_COMMAND(CopyTiles)
FOR_EACH_COMMAND(CropSprite)
FOR_EACH_COMMAND(Despeckle)
FOR_EACH_COMMAND(ExportSpriteSheet)
FOR_EACH_COMMAND(FlattenLayers)
FOR_EACH_COMMAND(HueSaturation)
FOR_EACH_COMMAND(InvertColor)
FOR_EACH_COMMAND(LayerFromBackground)
FOR_EACH_COMMAND(LoadPalette)
FOR_EACH_COMMAND(MergeDownLayer)
FOR_EACH_COMMAND(MoveColors)
FOR_EACH_COMMAND(MoveTiles)
FOR_EACH_COMMAND(NewFile)
FOR_EACH_COMMAND(NewFrame)
FOR_EACH_COMMAND(NewLayer)
FOR_EACH_COMMAND(OpenFile)
FOR_EACH_COMMAND(Outline)
FOR_EACH_COMMAND(PaletteSize)
FOR_EACH_COMMAND(Redo)
FOR_EACH_COMMAND(RemoveLayer)
FOR_EACH_COMMAND(ReplaceColor)
FOR_EACH_COMMAND(SaveFile)
FOR_EACH_COMMAND(SaveFileAs)
FOR_EACH_COMMAND(SaveFileCopyAs)
FOR_EACH_COMMAND(SpriteSize)
FOR_EACH_COMMAND(Undo)

#ifdef ENABLE_UI
FOR_EACH_COMMAND(About)
FOR_EACH_COMMAND(AdvancedMode)
FOR_EACH_COMMAND(Cancel)
FOR_EACH_COMMAND(CelProperties)
FOR_EACH_COMMAND(ChangeBrush)
FOR_EACH_COMMAND(ChangeColor)
FOR_EACH_COMMAND(Clear)
FOR_EACH_COMMAND(ClearCel)
FOR_EACH_COMMAND(ClearRecentFiles)
FOR_EACH_COMMAND(CloseAllFiles)
FOR_EACH_COMMAND(CloseFile)
FOR_EACH_COMMAND(ContiguousFill)
FOR_EACH_COMMAND(Copy)
FOR_EACH_COMMAND(CopyCel)
FOR_EACH_COMMAND(CopyMerged)
FOR_EACH_COMMAND(Cut)
FOR_EACH_COMMAND(DeselectMask)
FOR_EACH_COMMAND(DiscardBrush)
FOR_EACH_COMMAND(DuplicateLayer)
FOR_EACH_COMMAND(DuplicateSprite)
FOR_EACH_COMMAND(DuplicateView)
FOR_EACH_COMMAND(Exit)
FOR_EACH_COMMAND(Eyedropper)
FOR_EACH_COMMAND(Fill)
FOR_EACH_COMMAND(FitScreen)
FOR_EACH_COMMAND(Flip)
FOR_EACH_COMMAND(FrameProperties)
FOR_EACH_COMMAND(FrameTagProperties)
FOR_EACH_COMMAND(FullscreenPreview)
FOR_EACH_COMMAND(GotoFirstFrame)
FOR_EACH_COMMAND(GotoFirstFrameInTag)
FOR_EACH_COMMAND(GotoFrame)
FOR_EACH_COMMAND(GotoLastFrame)
FOR_EACH_COMMAND(GotoLastFrameInTag)
FOR_EACH_COMMAND(GotoNextFrame)
FOR_EACH_COMMAND(GotoNextFrameWithSameTag)
FOR_EACH_COMMAND(GotoNextLayer)
FOR_EACH_COMMAND(GotoNextTab)
FOR_EACH_COMMAND(GotoPreviousFrame)
FOR_EACH_COMMAND(GotoPreviousFrameWithSameTag)
FOR_EACH_COMMAND(GotoPreviousLayer)
FOR_EACH_COMMAND(GotoPreviousTab)
FOR_EACH_COMMAND(GridSettings)
FOR_EACH_COMMAND(Home)
FOR_EACH_COMMAND(ImportSpriteSheet)
FOR_EACH_COMMAND(InvertMask)
FOR_EACH_COMMAND(KeyboardShortcuts)
FOR_EACH_COMMAND(Launch)
FOR_EACH_COMMAND(LayerLock)
FOR_EACH_COMMAND(LayerOpacity)
FOR_EACH_COMMAND(LayerProperties)
FOR_EACH_COMMAND(LayerVisibility)
FOR_EACH_COMMAND(LinkCels)
FOR_EACH_COMMAND(LoadMask)
FOR_EACH_COMMAND(MaskAll)
FOR_EACH_COMMAND(MaskByColor)
FOR_EACH_COMMAND(MaskContent)
FOR_EACH_COMMAND(ModifySelection)
FOR_EACH_COMMAND(MoveCel)
FOR_EACH_COMMAND(MoveMask)
FOR_EACH_COMMAND(NewBrush)
FOR_EACH_COMMAND(NewFrameTag)
FOR_EACH_COMMAND(NewSpriteFromSelection)
FOR_EACH_COMMAND(OpenBrowser)
FOR_EACH_COMMAND(OpenGroup)
FOR_EACH_COMMAND(OpenInFolder)
FOR_EACH_COMMAND(OpenWithApp)
FOR_EACH_COMMAND(Options)
FOR_EACH_COMMAND(PaletteEditor)
FOR_EACH_COMMAND(Paste)
FOR_EACH_COMMAND(PasteText)
FOR_EACH_COMMAND(PixelPerfectMode)
FOR_EACH_COMMAND(PlayAnimation)
FOR_EACH_COMMAND(PlayPreviewAnimation)
FOR_EACH_COMMAND(Refresh)
FOR_EACH_COMMAND(RemoveFrame)
FOR_EACH_COMMAND(RemoveFrameTag)
FOR_EACH_COMMAND(RemoveSlice)
FOR_EACH_COMMAND(ReopenClosedFile)
FOR_EACH_COMMAND(RepeatLastExport)
FOR_EACH_COMMAND(ReselectMask)
FOR_EACH_COMMAND(ReverseFrames)
FOR_EACH_COMMAND(Rotate)
FOR_EACH_COMMAND(SaveMask)
FOR_EACH_COMMAND(SavePalette)
FOR_EACH_COMMAND(Screenshot)
FOR_EACH_COMMAND(Scroll)
FOR_EACH_COMMAND(ScrollCenter)
FOR_EACH_COMMAND(SelectTile)
FOR_EACH_COMMAND(SelectionAsGrid)
FOR_EACH_COMMAND(SetColorSelector)
FOR_EACH_COMMAND(SetInkType)
FOR_EACH_COMMAND(SetLoopSection)
FOR_EACH_COMMAND(SetPalette)
FOR_EACH_COMMAND(SetPaletteEntrySize)
FOR_EACH_COMMAND(SetSameInk)
FOR_EACH_COMMAND(ShowAutoGuides)
FOR_EACH_COMMAND(ShowBrushPreview)
FOR_EACH_COMMAND(ShowExtras)
FOR_EACH_COMMAND(ShowGrid)
FOR_EACH_COMMAND(ShowLayerEdges)
FOR_EACH_COMMAND(ShowOnionSkin)
FOR_EACH_COMMAND(ShowPixelGrid)
FOR_EACH_COMMAND(ShowSelectionEdges)
FOR_EACH_COMMAND(ShowSlices)
FOR_EACH_COMMAND(SliceProperties)
FOR_EACH_COMMAND(SnapToGrid)
FOR_EACH_COMMAND(SpriteProperties)
FOR_EACH_COMMAND(Stroke)
FOR_EACH_COMMAND(SwitchColors)
FOR_EACH_COMMAND(SymmetryMode)
FOR_EACH_COMMAND(TiledMode)
FOR_EACH_COMMAND(TilesetMode)
FOR_EACH_COMMAND(Timeline)
FOR_EACH_COMMAND(TogglePreview)
FOR_EACH_COMMAND(ToggleTilesMode)
FOR_EACH_COMMAND(ToggleTimelineThumbnails)
FOR_EACH_COMMAND(UndoHistory)
FOR_EACH_COMMAND(UnlinkCel)
FOR_EACH_COMMAND(Zoom)
#endif  // ENABLE_UI

#ifdef ENABLE_SCRIPTING
  #ifdef ENABLE_UI
    FOR_EACH_COMMAND(DeveloperConsole)
    FOR_EACH_COMMAND(OpenScriptFolder)
  #endif
FOR_EACH_COMMAND(RunScript)
#endif  // ENABLE_SCRIPTING
